

#include "huaweicloud/iotda/v5/model/ShowAsyncDeviceCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowAsyncDeviceCommandResponse::ShowAsyncDeviceCommandResponse()
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
    resultIsSet_ = false;
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

ShowAsyncDeviceCommandResponse::~ShowAsyncDeviceCommandResponse() = default;

void ShowAsyncDeviceCommandResponse::validate()
{
}

web::json::value ShowAsyncDeviceCommandResponse::toJson() const
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
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
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
bool ShowAsyncDeviceCommandResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::string ShowAsyncDeviceCommandResponse::getDeviceId() const
{
    return deviceId_;
}

void ShowAsyncDeviceCommandResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getCommandId() const
{
    return commandId_;
}

void ShowAsyncDeviceCommandResponse::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getServiceId() const
{
    return serviceId_;
}

void ShowAsyncDeviceCommandResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getCommandName() const
{
    return commandName_;
}

void ShowAsyncDeviceCommandResponse::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetcommandName()
{
    commandNameIsSet_ = false;
}

Object ShowAsyncDeviceCommandResponse::getParas() const
{
    return paras_;
}

void ShowAsyncDeviceCommandResponse::setParas(const Object& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::parasIsSet() const
{
    return parasIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetparas()
{
    parasIsSet_ = false;
}

int32_t ShowAsyncDeviceCommandResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowAsyncDeviceCommandResponse::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getStatus() const
{
    return status_;
}

void ShowAsyncDeviceCommandResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowAsyncDeviceCommandResponse::getResult() const
{
    return result_;
}

void ShowAsyncDeviceCommandResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getCreatedTime() const
{
    return createdTime_;
}

void ShowAsyncDeviceCommandResponse::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getSentTime() const
{
    return sentTime_;
}

void ShowAsyncDeviceCommandResponse::setSentTime(const std::string& value)
{
    sentTime_ = value;
    sentTimeIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::sentTimeIsSet() const
{
    return sentTimeIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetsentTime()
{
    sentTimeIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getDeliveredTime() const
{
    return deliveredTime_;
}

void ShowAsyncDeviceCommandResponse::setDeliveredTime(const std::string& value)
{
    deliveredTime_ = value;
    deliveredTimeIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::deliveredTimeIsSet() const
{
    return deliveredTimeIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetdeliveredTime()
{
    deliveredTimeIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getSendStrategy() const
{
    return sendStrategy_;
}

void ShowAsyncDeviceCommandResponse::setSendStrategy(const std::string& value)
{
    sendStrategy_ = value;
    sendStrategyIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::sendStrategyIsSet() const
{
    return sendStrategyIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetsendStrategy()
{
    sendStrategyIsSet_ = false;
}

std::string ShowAsyncDeviceCommandResponse::getResponseTime() const
{
    return responseTime_;
}

void ShowAsyncDeviceCommandResponse::setResponseTime(const std::string& value)
{
    responseTime_ = value;
    responseTimeIsSet_ = true;
}

bool ShowAsyncDeviceCommandResponse::responseTimeIsSet() const
{
    return responseTimeIsSet_;
}

void ShowAsyncDeviceCommandResponse::unsetresponseTime()
{
    responseTimeIsSet_ = false;
}

}
}
}
}
}


