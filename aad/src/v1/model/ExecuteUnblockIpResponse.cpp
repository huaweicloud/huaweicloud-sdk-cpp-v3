

#include "huaweicloud/aad/v1/model/ExecuteUnblockIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ExecuteUnblockIpResponse::ExecuteUnblockIpResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ExecuteUnblockIpResponse::~ExecuteUnblockIpResponse() = default;

void ExecuteUnblockIpResponse::validate()
{
}

web::json::value ExecuteUnblockIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ExecuteUnblockIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ExecuteUnblockIpResponse::getErrorCode() const
{
    return errorCode_;
}

void ExecuteUnblockIpResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ExecuteUnblockIpResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ExecuteUnblockIpResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ExecuteUnblockIpResponse::getMessage() const
{
    return message_;
}

void ExecuteUnblockIpResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ExecuteUnblockIpResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ExecuteUnblockIpResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


