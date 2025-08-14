

#include "huaweicloud/iotda/v5/model/DeviceCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceCommandRequest::DeviceCommandRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
    parasIsSet_ = false;
}

DeviceCommandRequest::~DeviceCommandRequest() = default;

void DeviceCommandRequest::validate()
{
}

web::json::value DeviceCommandRequest::toJson() const
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

    return val;
}
bool DeviceCommandRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeviceCommandRequest::getServiceId() const
{
    return serviceId_;
}

void DeviceCommandRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool DeviceCommandRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void DeviceCommandRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string DeviceCommandRequest::getCommandName() const
{
    return commandName_;
}

void DeviceCommandRequest::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool DeviceCommandRequest::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void DeviceCommandRequest::unsetcommandName()
{
    commandNameIsSet_ = false;
}

Object DeviceCommandRequest::getParas() const
{
    return paras_;
}

void DeviceCommandRequest::setParas(const Object& value)
{
    paras_ = value;
    parasIsSet_ = true;
}

bool DeviceCommandRequest::parasIsSet() const
{
    return parasIsSet_;
}

void DeviceCommandRequest::unsetparas()
{
    parasIsSet_ = false;
}

}
}
}
}
}


