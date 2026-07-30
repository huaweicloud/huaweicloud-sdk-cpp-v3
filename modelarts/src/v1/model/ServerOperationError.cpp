

#include "huaweicloud/modelarts/v1/model/ServerOperationError.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerOperationError::ServerOperationError()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ServerOperationError::~ServerOperationError() = default;

void ServerOperationError::validate()
{
}

web::json::value ServerOperationError::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ServerOperationError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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


std::string ServerOperationError::getCode() const
{
    return code_;
}

void ServerOperationError::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ServerOperationError::codeIsSet() const
{
    return codeIsSet_;
}

void ServerOperationError::unsetcode()
{
    codeIsSet_ = false;
}

std::string ServerOperationError::getMessage() const
{
    return message_;
}

void ServerOperationError::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ServerOperationError::messageIsSet() const
{
    return messageIsSet_;
}

void ServerOperationError::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


