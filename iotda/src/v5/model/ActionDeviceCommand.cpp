

#include "huaweicloud/iotda/v5/model/ActionDeviceCommand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ActionDeviceCommand::ActionDeviceCommand()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    cmdIsSet_ = false;
}

ActionDeviceCommand::~ActionDeviceCommand() = default;

void ActionDeviceCommand::validate()
{
}

web::json::value ActionDeviceCommand::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
    }

    return val;
}
bool ActionDeviceCommand::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmd"));
        if(!fieldValue.is_null())
        {
            CMD refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmd(refVal);
        }
    }
    return ok;
}


std::string ActionDeviceCommand::getDeviceId() const
{
    return deviceId_;
}

void ActionDeviceCommand::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ActionDeviceCommand::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ActionDeviceCommand::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

CMD ActionDeviceCommand::getCmd() const
{
    return cmd_;
}

void ActionDeviceCommand::setCmd(const CMD& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool ActionDeviceCommand::cmdIsSet() const
{
    return cmdIsSet_;
}

void ActionDeviceCommand::unsetcmd()
{
    cmdIsSet_ = false;
}

}
}
}
}
}


