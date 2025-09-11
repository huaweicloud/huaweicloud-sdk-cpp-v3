

#include "huaweicloud/gaussdbforopengauss/v3/model/AddHbaConfsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AddHbaConfsResponse::AddHbaConfsResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

AddHbaConfsResponse::~AddHbaConfsResponse() = default;

void AddHbaConfsResponse::validate()
{
}

web::json::value AddHbaConfsResponse::toJson() const
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
bool AddHbaConfsResponse::fromJson(const web::json::value& val)
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


std::string AddHbaConfsResponse::getCode() const
{
    return code_;
}

void AddHbaConfsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AddHbaConfsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void AddHbaConfsResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string AddHbaConfsResponse::getMessage() const
{
    return message_;
}

void AddHbaConfsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AddHbaConfsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void AddHbaConfsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


