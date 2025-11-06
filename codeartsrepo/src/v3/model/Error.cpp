

#include "huaweicloud/codeartsrepo/v3/model/Error.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




Error::Error()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

Error::~Error() = default;

void Error::validate()
{
}

web::json::value Error::toJson() const
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
bool Error::fromJson(const web::json::value& val)
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


std::string Error::getCode() const
{
    return code_;
}

void Error::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool Error::codeIsSet() const
{
    return codeIsSet_;
}

void Error::unsetcode()
{
    codeIsSet_ = false;
}

std::string Error::getMessage() const
{
    return message_;
}

void Error::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Error::messageIsSet() const
{
    return messageIsSet_;
}

void Error::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


