

#include "huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestoreHbaInfoResponse::RestoreHbaInfoResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

RestoreHbaInfoResponse::~RestoreHbaInfoResponse() = default;

void RestoreHbaInfoResponse::validate()
{
}

web::json::value RestoreHbaInfoResponse::toJson() const
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
bool RestoreHbaInfoResponse::fromJson(const web::json::value& val)
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


std::string RestoreHbaInfoResponse::getCode() const
{
    return code_;
}

void RestoreHbaInfoResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool RestoreHbaInfoResponse::codeIsSet() const
{
    return codeIsSet_;
}

void RestoreHbaInfoResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string RestoreHbaInfoResponse::getMessage() const
{
    return message_;
}

void RestoreHbaInfoResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool RestoreHbaInfoResponse::messageIsSet() const
{
    return messageIsSet_;
}

void RestoreHbaInfoResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


