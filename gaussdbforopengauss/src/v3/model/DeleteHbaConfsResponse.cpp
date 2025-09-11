

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteHbaConfsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteHbaConfsResponse::DeleteHbaConfsResponse()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

DeleteHbaConfsResponse::~DeleteHbaConfsResponse() = default;

void DeleteHbaConfsResponse::validate()
{
}

web::json::value DeleteHbaConfsResponse::toJson() const
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
bool DeleteHbaConfsResponse::fromJson(const web::json::value& val)
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


std::string DeleteHbaConfsResponse::getCode() const
{
    return code_;
}

void DeleteHbaConfsResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteHbaConfsResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteHbaConfsResponse::unsetcode()
{
    codeIsSet_ = false;
}

std::string DeleteHbaConfsResponse::getMessage() const
{
    return message_;
}

void DeleteHbaConfsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteHbaConfsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteHbaConfsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


