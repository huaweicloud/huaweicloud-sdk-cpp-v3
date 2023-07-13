

#include "huaweicloud/mpc/v1/model/ErrorResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ErrorResponse::ErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorResponse::~ErrorResponse() = default;

void ErrorResponse::validate()
{
}

web::json::value ErrorResponse::toJson() const
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

bool ErrorResponse::fromJson(const web::json::value& val)
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

std::string ErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void ErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


