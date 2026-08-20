

#include "huaweicloud/codeartspipeline/v2/model/ErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ErrorInfo::ErrorInfo()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ErrorInfo::~ErrorInfo() = default;

void ErrorInfo::validate()
{
}

web::json::value ErrorInfo::toJson() const
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
bool ErrorInfo::fromJson(const web::json::value& val)
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


std::string ErrorInfo::getCode() const
{
    return code_;
}

void ErrorInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ErrorInfo::codeIsSet() const
{
    return codeIsSet_;
}

void ErrorInfo::unsetcode()
{
    codeIsSet_ = false;
}

std::string ErrorInfo::getMessage() const
{
    return message_;
}

void ErrorInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ErrorInfo::messageIsSet() const
{
    return messageIsSet_;
}

void ErrorInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


