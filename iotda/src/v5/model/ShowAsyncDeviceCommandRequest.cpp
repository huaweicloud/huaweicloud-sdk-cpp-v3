

#include "huaweicloud/iotda/v5/model/ShowAsyncDeviceCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowAsyncDeviceCommandRequest::ShowAsyncDeviceCommandRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    commandId_ = "";
    commandIdIsSet_ = false;
}

ShowAsyncDeviceCommandRequest::~ShowAsyncDeviceCommandRequest() = default;

void ShowAsyncDeviceCommandRequest::validate()
{
}

web::json::value ShowAsyncDeviceCommandRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }

    return val;
}
bool ShowAsyncDeviceCommandRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("command_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandId(refVal);
        }
    }
    return ok;
}


std::string ShowAsyncDeviceCommandRequest::getDeviceId() const
{
    return deviceId_;
}

void ShowAsyncDeviceCommandRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowAsyncDeviceCommandRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ShowAsyncDeviceCommandRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAsyncDeviceCommandRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAsyncDeviceCommandRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAsyncDeviceCommandRequest::getCommandId() const
{
    return commandId_;
}

void ShowAsyncDeviceCommandRequest::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandRequest::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void ShowAsyncDeviceCommandRequest::unsetcommandId()
{
    commandIdIsSet_ = false;
}

}
}
}
}
}


