

#include "huaweicloud/iotda/v5/model/CMD.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CMD::CMD()
{
    commandName_ = "";
    commandNameIsSet_ = false;
    commandBodyIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bufferTimeout_ = 0;
    bufferTimeoutIsSet_ = false;
    responseTimeout_ = 0;
    responseTimeoutIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

CMD::~CMD() = default;

void CMD::validate()
{
}

web::json::value CMD::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandNameIsSet_) {
        val[utility::conversions::to_string_t("command_name")] = ModelBase::toJson(commandName_);
    }
    if(commandBodyIsSet_) {
        val[utility::conversions::to_string_t("command_body")] = ModelBase::toJson(commandBody_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bufferTimeoutIsSet_) {
        val[utility::conversions::to_string_t("buffer_timeout")] = ModelBase::toJson(bufferTimeout_);
    }
    if(responseTimeoutIsSet_) {
        val[utility::conversions::to_string_t("response_timeout")] = ModelBase::toJson(responseTimeout_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool CMD::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandBody(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("buffer_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buffer_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBufferTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string CMD::getCommandName() const
{
    return commandName_;
}

void CMD::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool CMD::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void CMD::unsetcommandName()
{
    commandNameIsSet_ = false;
}

Object CMD::getCommandBody() const
{
    return commandBody_;
}

void CMD::setCommandBody(const Object& value)
{
    commandBody_ = value;
    commandBodyIsSet_ = true;
}

bool CMD::commandBodyIsSet() const
{
    return commandBodyIsSet_;
}

void CMD::unsetcommandBody()
{
    commandBodyIsSet_ = false;
}

std::string CMD::getServiceId() const
{
    return serviceId_;
}

void CMD::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CMD::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CMD::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

int32_t CMD::getBufferTimeout() const
{
    return bufferTimeout_;
}

void CMD::setBufferTimeout(int32_t value)
{
    bufferTimeout_ = value;
    bufferTimeoutIsSet_ = true;
}

bool CMD::bufferTimeoutIsSet() const
{
    return bufferTimeoutIsSet_;
}

void CMD::unsetbufferTimeout()
{
    bufferTimeoutIsSet_ = false;
}

int32_t CMD::getResponseTimeout() const
{
    return responseTimeout_;
}

void CMD::setResponseTimeout(int32_t value)
{
    responseTimeout_ = value;
    responseTimeoutIsSet_ = true;
}

bool CMD::responseTimeoutIsSet() const
{
    return responseTimeoutIsSet_;
}

void CMD::unsetresponseTimeout()
{
    responseTimeoutIsSet_ = false;
}

std::string CMD::getMode() const
{
    return mode_;
}

void CMD::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CMD::modeIsSet() const
{
    return modeIsSet_;
}

void CMD::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


