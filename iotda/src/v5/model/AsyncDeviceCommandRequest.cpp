

#include "huaweicloud/iotda/v5/model/AsyncDeviceCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AsyncDeviceCommandRequest::AsyncDeviceCommandRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
    parasIsSet_ = false;
    expireTime_ = 0;
    expireTimeIsSet_ = false;
    sendStrategy_ = "";
    sendStrategyIsSet_ = false;
}

AsyncDeviceCommandRequest::~AsyncDeviceCommandRequest() = default;

void AsyncDeviceCommandRequest::validate()
{
}

web::json::value AsyncDeviceCommandRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(sendStrategyIsSet_) {
        val[utility::conversions::to_string_t("send_strategy")] = ModelBase::toJson(sendStrategy_);
    }

    return val;
}
bool AsyncDeviceCommandRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string AsyncDeviceCommandRequest::getServiceId() const
{
    return serviceId_;
}

void AsyncDeviceCommandRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool AsyncDeviceCommandRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void AsyncDeviceCommandRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string AsyncDeviceCommandRequest::getCommandName() const
{
    return commandName_;
}

void AsyncDeviceCommandRequest::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool AsyncDeviceCommandRequest::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void AsyncDeviceCommandRequest::unsetcommandName()
{
    commandNameIsSet_ = false;
}

Object AsyncDeviceCommandRequest::getParas() const
{
    return paras_;
}

void AsyncDeviceCommandRequest::setParas(const Object& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool AsyncDeviceCommandRequest::parasIsSet() const
{
    return parasIsSet_;
}

void AsyncDeviceCommandRequest::unsetparas()
{
    parasIsSet_ = false;
}

int32_t AsyncDeviceCommandRequest::getExpireTime() const
{
    return expireTime_;
}

void AsyncDeviceCommandRequest::setExpireTime(int32_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool AsyncDeviceCommandRequest::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void AsyncDeviceCommandRequest::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string AsyncDeviceCommandRequest::getSendStrategy() const
{
    return sendStrategy_;
}

void AsyncDeviceCommandRequest::setSendStrategy(const std::string& value)
{
    sendStrategy_ = value;
    sendStrategyIsSet_ = true;
}

bool AsyncDeviceCommandRequest::sendStrategyIsSet() const
{
    return sendStrategyIsSet_;
}

void AsyncDeviceCommandRequest::unsetsendStrategy()
{
    sendStrategyIsSet_ = false;
}

}
}
}
}
}


