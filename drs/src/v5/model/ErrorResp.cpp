

#include "huaweicloud/drs/v5/model/ErrorResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ErrorResp::ErrorResp()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorResp::~ErrorResp() = default;

void ErrorResp::validate()
{
}

web::json::value ErrorResp::toJson() const
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
bool ErrorResp::fromJson(const web::json::value& val)
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


std::string ErrorResp::getErrorCode() const
{
    return errorCode_;
}

void ErrorResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorResp::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


