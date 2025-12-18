

#include "huaweicloud/meeting/v1/model/SetQosThresholdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetQosThresholdResponse::SetQosThresholdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

SetQosThresholdResponse::~SetQosThresholdResponse() = default;

void SetQosThresholdResponse::validate()
{
}

web::json::value SetQosThresholdResponse::toJson() const
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
bool SetQosThresholdResponse::fromJson(const web::json::value& val)
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


std::string SetQosThresholdResponse::getCode() const
{
    return code_;
}

void SetQosThresholdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool SetQosThresholdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void SetQosThresholdResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string SetQosThresholdResponse::getMessage() const
{
    return message_;
}

void SetQosThresholdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SetQosThresholdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void SetQosThresholdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


