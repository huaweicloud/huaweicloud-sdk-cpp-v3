

#include "huaweicloud/cbr/v1/model/OpErrorInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpErrorInfo::OpErrorInfo()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

OpErrorInfo::~OpErrorInfo() = default;

void OpErrorInfo::validate()
{
}

web::json::value OpErrorInfo::toJson() const
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

bool OpErrorInfo::fromJson(const web::json::value& val)
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

std::string OpErrorInfo::getCode() const
{
    return code_;
}

void OpErrorInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool OpErrorInfo::codeIsSet() const
{
    return codeIsSet_;
}

void OpErrorInfo::unsetcode()
{
    codeIsSet_ = false;
}

std::string OpErrorInfo::getMessage() const
{
    return message_;
}

void OpErrorInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool OpErrorInfo::messageIsSet() const
{
    return messageIsSet_;
}

void OpErrorInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


