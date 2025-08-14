

#include "huaweicloud/iotda/v5/model/ListDeviceMessagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceMessagesRequest::ListDeviceMessagesRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListDeviceMessagesRequest::~ListDeviceMessagesRequest() = default;

void ListDeviceMessagesRequest::validate()
{
}

web::json::value ListDeviceMessagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListDeviceMessagesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListDeviceMessagesRequest::getDeviceId() const
{
    return deviceId_;
}

void ListDeviceMessagesRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListDeviceMessagesRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListDeviceMessagesRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ListDeviceMessagesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceMessagesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceMessagesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceMessagesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


