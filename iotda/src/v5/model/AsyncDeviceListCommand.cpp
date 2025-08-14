

#include "huaweicloud/iotda/v5/model/AsyncDeviceListCommand.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AsyncDeviceListCommand::AsyncDeviceListCommand()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    commandId_ = "";
    commandIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    sentTime_ = "";
    sentTimeIsSet_ = false;
    deliveredTime_ = "";
    deliveredTimeIsSet_ = false;
    sendStrategy_ = "";
    sendStrategyIsSet_ = false;
    responseTime_ = "";
    responseTimeIsSet_ = false;
}

AsyncDeviceListCommand::~AsyncDeviceListCommand() = default;

void AsyncDeviceListCommand::validate()
{
}

web::json::value AsyncDeviceListCommand::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(commandNameIsSet_) {
        val[utility::conversions::to_string_t("command_name")] = ModelBase::toJson(commandName_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(sentTimeIsSet_) {
        val[utility::conversions::to_string_t("sent_time")] = ModelBase::toJson(sentTime_);
    }
    if(deliveredTimeIsSet_) {
        val[utility::conversions::to_string_t("delivered_time")] = ModelBase::toJson(deliveredTime_);
    }
    if(sendStrategyIsSet_) {
        val[utility::conversions::to_string_t("send_strategy")] = ModelBase::toJson(sendStrategy_);
    }
    if(responseTimeIsSet_) {
        val[utility::conversions::to_string_t("response_time")] = ModelBase::toJson(responseTime_);
    }

    return val;
}
bool AsyncDeviceListCommand::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("command_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sent_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sent_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSentTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delivered_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delivered_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeliveredTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseTime(refVal);
        }
    }
    return ok;
}


std::string AsyncDeviceListCommand::getDeviceId() const
{
    return deviceId_;
}

void AsyncDeviceListCommand::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool AsyncDeviceListCommand::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void AsyncDeviceListCommand::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string AsyncDeviceListCommand::getCommandId() const
{
    return commandId_;
}

void AsyncDeviceListCommand::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool AsyncDeviceListCommand::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void AsyncDeviceListCommand::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string AsyncDeviceListCommand::getServiceId() const
{
    return serviceId_;
}

void AsyncDeviceListCommand::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AsyncDeviceListCommand::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AsyncDeviceListCommand::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string AsyncDeviceListCommand::getCommandName() const
{
    return commandName_;
}

void AsyncDeviceListCommand::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool AsyncDeviceListCommand::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void AsyncDeviceListCommand::unsetcommandName()
{
    commandNameIsSet_ = false;
}

int32_t AsyncDeviceListCommand::getExpireTime() const
{
    return expireTime_;
}

void AsyncDeviceListCommand::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool AsyncDeviceListCommand::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void AsyncDeviceListCommand::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string AsyncDeviceListCommand::getStatus() const
{
    return status_;
}

void AsyncDeviceListCommand::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AsyncDeviceListCommand::statusIsSet() const
{
    return statusIsSet_;
}

void AsyncDeviceListCommand::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AsyncDeviceListCommand::getCreatedTime() const
{
    return createdTime_;
}

void AsyncDeviceListCommand::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool AsyncDeviceListCommand::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void AsyncDeviceListCommand::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string AsyncDeviceListCommand::getSentTime() const
{
    return sentTime_;
}

void AsyncDeviceListCommand::setSentTime(const std::string& value)
{
    sentTime_ = value;
    sentTimeIsSet_ = true;
}

bool AsyncDeviceListCommand::sentTimeIsSet() const
{
    return sentTimeIsSet_;
}

void AsyncDeviceListCommand::unsetsentTime()
{
    sentTimeIsSet_ = false;
}

std::string AsyncDeviceListCommand::getDeliveredTime() const
{
    return deliveredTime_;
}

void AsyncDeviceListCommand::setDeliveredTime(const std::string& value)
{
    deliveredTime_ = value;
    deliveredTimeIsSet_ = true;
}

bool AsyncDeviceListCommand::deliveredTimeIsSet() const
{
    return deliveredTimeIsSet_;
}

void AsyncDeviceListCommand::unsetdeliveredTime()
{
    deliveredTimeIsSet_ = false;
}

std::string AsyncDeviceListCommand::getSendStrategy() const
{
    return sendStrategy_;
}

void AsyncDeviceListCommand::setSendStrategy(const std::string& value)
{
    sendStrategy_ = value;
    sendStrategyIsSet_ = true;
}

bool AsyncDeviceListCommand::sendStrategyIsSet() const
{
    return sendStrategyIsSet_;
}

void AsyncDeviceListCommand::unsetsendStrategy()
{
    sendStrategyIsSet_ = false;
}

std::string AsyncDeviceListCommand::getResponseTime() const
{
    return responseTime_;
}

void AsyncDeviceListCommand::setResponseTime(const std::string& value)
{
    responseTime_ = value;
    responseTimeIsSet_ = true;
}

bool AsyncDeviceListCommand::responseTimeIsSet() const
{
    return responseTimeIsSet_;
}

void AsyncDeviceListCommand::unsetresponseTime()
{
    responseTimeIsSet_ = false;
}

}
}
}
}
}


