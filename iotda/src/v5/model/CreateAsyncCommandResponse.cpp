

#include "huaweicloud/iotda/v5/model/CreateAsyncCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAsyncCommandResponse::CreateAsyncCommandResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    commandId_ = "";
    commandIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
    parasIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    sendStrategy_ = "";
    sendStrategyIsSet_ = false;
}

CreateAsyncCommandResponse::~CreateAsyncCommandResponse() = default;

void CreateAsyncCommandResponse::validate()
{
}

web::json::value CreateAsyncCommandResponse::toJson() const
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
    if(parasIsSet_) {
        val[utility::conversions::to_string_t("paras")] = ModelBase::toJson(paras_);
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
    if(sendStrategyIsSet_) {
        val[utility::conversions::to_string_t("send_strategy")] = ModelBase::toJson(sendStrategy_);
    }

    return val;
}
bool CreateAsyncCommandResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paras"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParas(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("send_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendStrategy(refVal);
        }
    }
    return ok;
}


std::string CreateAsyncCommandResponse::getDeviceId() const
{
    return deviceId_;
}

void CreateAsyncCommandResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CreateAsyncCommandResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CreateAsyncCommandResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getCommandId() const
{
    return commandId_;
}

void CreateAsyncCommandResponse::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool CreateAsyncCommandResponse::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void CreateAsyncCommandResponse::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getServiceId() const
{
    return serviceId_;
}

void CreateAsyncCommandResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateAsyncCommandResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateAsyncCommandResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getCommandName() const
{
    return commandName_;
}

void CreateAsyncCommandResponse::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool CreateAsyncCommandResponse::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void CreateAsyncCommandResponse::unsetcommandName()
{
    commandNameIsSet_ = false;
}

Object CreateAsyncCommandResponse::getParas() const
{
    return paras_;
}

void CreateAsyncCommandResponse::setParas(const Object& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool CreateAsyncCommandResponse::parasIsSet() const
{
    return parasIsSet_;
}

void CreateAsyncCommandResponse::unsetparas()
{
    parasIsSet_ = false;
}

int32_t CreateAsyncCommandResponse::getExpireTime() const
{
    return expireTime_;
}

void CreateAsyncCommandResponse::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CreateAsyncCommandResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CreateAsyncCommandResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getStatus() const
{
    return status_;
}

void CreateAsyncCommandResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAsyncCommandResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAsyncCommandResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getCreatedTime() const
{
    return createdTime_;
}

void CreateAsyncCommandResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool CreateAsyncCommandResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void CreateAsyncCommandResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string CreateAsyncCommandResponse::getSendStrategy() const
{
    return sendStrategy_;
}

void CreateAsyncCommandResponse::setSendStrategy(const std::string& value)
{
    sendStrategy_ = value;
    sendStrategyIsSet_ = true;
}

bool CreateAsyncCommandResponse::sendStrategyIsSet() const
{
    return sendStrategyIsSet_;
}

void CreateAsyncCommandResponse::unsetsendStrategy()
{
    sendStrategyIsSet_ = false;
}

}
}
}
}
}


