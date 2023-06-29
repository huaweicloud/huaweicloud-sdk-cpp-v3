

#include "huaweicloud/mpc/v1/model/XCodeError.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




XCodeError::XCodeError()
{
    code_ = "";
    codeIsSet_ = false;
    msg_ = "";
    msgIsSet_ = false;
}

XCodeError::~XCodeError() = default;

void XCodeError::validate()
{
}

web::json::value XCodeError::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(msgIsSet_) {
        val[utility::conversions::to_string_t("msg")] = ModelBase::toJson(msg_);
    }

    return val;
}

bool XCodeError::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsg(refVal);
        }
    }
    return ok;
}


std::string XCodeError::getCode() const
{
    return code_;
}

void XCodeError::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool XCodeError::codeIsSet() const
{
    return codeIsSet_;
}

void XCodeError::unsetcode()
{
    codeIsSet_ = false;
}

std::string XCodeError::getMsg() const
{
    return msg_;
}

void XCodeError::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool XCodeError::msgIsSet() const
{
    return msgIsSet_;
}

void XCodeError::unsetmsg()
{
    msgIsSet_ = false;
}

}
}
}
}
}


