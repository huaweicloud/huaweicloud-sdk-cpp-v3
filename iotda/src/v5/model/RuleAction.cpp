

#include "huaweicloud/iotda/v5/model/RuleAction.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RuleAction::RuleAction()
{
    type_ = "";
    typeIsSet_ = false;
    deviceCommandIsSet_ = false;
    smnForwardingIsSet_ = false;
    deviceAlarmIsSet_ = false;
}

RuleAction::~RuleAction() = default;

void RuleAction::validate()
{
}

web::json::value RuleAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deviceCommandIsSet_) {
        val[utility::conversions::to_string_t("device_command")] = ModelBase::toJson(deviceCommand_);
    }
    if(smnForwardingIsSet_) {
        val[utility::conversions::to_string_t("smn_forwarding")] = ModelBase::toJson(smnForwarding_);
    }
    if(deviceAlarmIsSet_) {
        val[utility::conversions::to_string_t("device_alarm")] = ModelBase::toJson(deviceAlarm_);
    }

    return val;
}
bool RuleAction::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_command"));
        if(!fieldValue.is_null())
        {
            ActionDeviceCommand refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_forwarding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_forwarding"));
        if(!fieldValue.is_null())
        {
            ActionSmnForwarding refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnForwarding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_alarm"));
        if(!fieldValue.is_null())
        {
            ActionDeviceAlarm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceAlarm(refVal);
        }
    }
    return ok;
}


std::string RuleAction::getType() const
{
    return type_;
}

void RuleAction::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAction::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAction::unsettype()
{
    typeIsSet_ = false;
}

ActionDeviceCommand RuleAction::getDeviceCommand() const
{
    return deviceCommand_;
}

void RuleAction::setDeviceCommand(const ActionDeviceCommand& value)
{
    deviceCommand_ = value;
    deviceCommandIsSet_ = true;
}

bool RuleAction::deviceCommandIsSet() const
{
    return deviceCommandIsSet_;
}

void RuleAction::unsetdeviceCommand()
{
    deviceCommandIsSet_ = false;
}

ActionSmnForwarding RuleAction::getSmnForwarding() const
{
    return smnForwarding_;
}

void RuleAction::setSmnForwarding(const ActionSmnForwarding& value)
{
    smnForwarding_ = value;
    smnForwardingIsSet_ = true;
}

bool RuleAction::smnForwardingIsSet() const
{
    return smnForwardingIsSet_;
}

void RuleAction::unsetsmnForwarding()
{
    smnForwardingIsSet_ = false;
}

ActionDeviceAlarm RuleAction::getDeviceAlarm() const
{
    return deviceAlarm_;
}

void RuleAction::setDeviceAlarm(const ActionDeviceAlarm& value)
{
    deviceAlarm_ = value;
    deviceAlarmIsSet_ = true;
}

bool RuleAction::deviceAlarmIsSet() const
{
    return deviceAlarmIsSet_;
}

void RuleAction::unsetdeviceAlarm()
{
    deviceAlarmIsSet_ = false;
}

}
}
}
}
}


