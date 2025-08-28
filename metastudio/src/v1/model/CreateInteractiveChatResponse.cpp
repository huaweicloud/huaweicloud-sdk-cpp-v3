

#include "huaweicloud/metastudio/v1/model/CreateInteractiveChatResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractiveChatResponse::CreateInteractiveChatResponse()
{
    message_ = "";
    messageIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateInteractiveChatResponse::~CreateInteractiveChatResponse() = default;

void CreateInteractiveChatResponse::validate()
{
}

web::json::value CreateInteractiveChatResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateInteractiveChatResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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


std::string CreateInteractiveChatResponse::getMessage() const
{
    return message_;
}

void CreateInteractiveChatResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateInteractiveChatResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateInteractiveChatResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CreateInteractiveChatResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateInteractiveChatResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateInteractiveChatResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateInteractiveChatResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


