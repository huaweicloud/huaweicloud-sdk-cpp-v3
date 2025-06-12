

#include "huaweicloud/metastudio/v1/model/ExecuteSmartLiveCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteSmartLiveCommandResponse::ExecuteSmartLiveCommandResponse()
{
    commandId_ = "";
    commandIdIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ExecuteSmartLiveCommandResponse::~ExecuteSmartLiveCommandResponse() = default;

void ExecuteSmartLiveCommandResponse::validate()
{
}

web::json::value ExecuteSmartLiveCommandResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ExecuteSmartLiveCommandResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ExecuteSmartLiveCommandResponse::getCommandId() const
{
    return commandId_;
}

void ExecuteSmartLiveCommandResponse::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandResponse::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void ExecuteSmartLiveCommandResponse::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string ExecuteSmartLiveCommandResponse::getCommand() const
{
    return command_;
}

void ExecuteSmartLiveCommandResponse::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool ExecuteSmartLiveCommandResponse::commandIsSet() const
{
    return commandIsSet_;
}

void ExecuteSmartLiveCommandResponse::unsetcommand()
{
    commandIsSet_ = false;
}

std::string ExecuteSmartLiveCommandResponse::getResult() const
{
    return result_;
}

void ExecuteSmartLiveCommandResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ExecuteSmartLiveCommandResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ExecuteSmartLiveCommandResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ExecuteSmartLiveCommandResponse::getXRequestId() const
{
    return xRequestId_;
}

void ExecuteSmartLiveCommandResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ExecuteSmartLiveCommandResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ExecuteSmartLiveCommandResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


