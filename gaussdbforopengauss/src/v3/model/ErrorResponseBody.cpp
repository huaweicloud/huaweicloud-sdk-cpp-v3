

#include "huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ErrorResponseBody::ErrorResponseBody()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorResponseBody::~ErrorResponseBody() = default;

void ErrorResponseBody::validate()
{
}

web::json::value ErrorResponseBody::toJson() const
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
bool ErrorResponseBody::fromJson(const web::json::value& val)
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


std::string ErrorResponseBody::getErrorCode() const
{
    return errorCode_;
}

void ErrorResponseBody::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorResponseBody::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorResponseBody::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorResponseBody::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorResponseBody::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorResponseBody::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorResponseBody::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


