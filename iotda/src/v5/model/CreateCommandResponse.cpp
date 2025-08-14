

#include "huaweicloud/iotda/v5/model/CreateCommandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateCommandResponse::CreateCommandResponse()
{
    commandId_ = "";
    commandIdIsSet_ = false;
    responseIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsgIsSet_ = false;
}

CreateCommandResponse::~CreateCommandResponse() = default;

void CreateCommandResponse::validate()
{
}

web::json::value CreateCommandResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }
    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool CreateCommandResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string CreateCommandResponse::getCommandId() const
{
    return commandId_;
}

void CreateCommandResponse::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool CreateCommandResponse::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void CreateCommandResponse::unsetcommandId()
{
    commandIdIsSet_ = false;
}

Object CreateCommandResponse::getResponse() const
{
    return response_;
}

void CreateCommandResponse::setResponse(const Object& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool CreateCommandResponse::responseIsSet() const
{
    return responseIsSet_;
}

void CreateCommandResponse::unsetresponse()
{
    responseIsSet_ = false;
}

std::string CreateCommandResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateCommandResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateCommandResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateCommandResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

Object CreateCommandResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateCommandResponse::setErrorMsg(const Object& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateCommandResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateCommandResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


