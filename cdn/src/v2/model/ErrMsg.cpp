

#include "huaweicloud/cdn/v2/model/ErrMsg.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ErrMsg::ErrMsg()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrMsg::~ErrMsg() = default;

void ErrMsg::validate()
{
}

web::json::value ErrMsg::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool ErrMsg::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string ErrMsg::getErrorCode() const
{
    return errorCode_;
}

void ErrMsg::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrMsg::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrMsg::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrMsg::getErrorMsg() const
{
    return errorMsg_;
}

void ErrMsg::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrMsg::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrMsg::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


