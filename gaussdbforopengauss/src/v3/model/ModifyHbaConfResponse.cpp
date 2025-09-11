

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyHbaConfResponse::ModifyHbaConfResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ModifyHbaConfResponse::~ModifyHbaConfResponse() = default;

void ModifyHbaConfResponse::validate()
{
}

web::json::value ModifyHbaConfResponse::toJson() const
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
bool ModifyHbaConfResponse::fromJson(const web::json::value& val)
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


std::string ModifyHbaConfResponse::getCode() const
{
    return code_;
}

void ModifyHbaConfResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ModifyHbaConfResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ModifyHbaConfResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string ModifyHbaConfResponse::getMessage() const
{
    return message_;
}

void ModifyHbaConfResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ModifyHbaConfResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ModifyHbaConfResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


