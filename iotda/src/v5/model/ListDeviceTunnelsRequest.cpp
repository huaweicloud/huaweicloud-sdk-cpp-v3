

#include "huaweicloud/iotda/v5/model/ListDeviceTunnelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceTunnelsRequest::ListDeviceTunnelsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

ListDeviceTunnelsRequest::~ListDeviceTunnelsRequest() = default;

void ListDeviceTunnelsRequest::validate()
{
}

web::json::value ListDeviceTunnelsRequest::toJson() const
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
bool ListDeviceTunnelsRequest::fromJson(const web::json::value& val)
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


std::string ListDeviceTunnelsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceTunnelsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceTunnelsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceTunnelsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceTunnelsRequest::getDeviceId() const
{
    return deviceId_;
}

void ListDeviceTunnelsRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListDeviceTunnelsRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListDeviceTunnelsRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


