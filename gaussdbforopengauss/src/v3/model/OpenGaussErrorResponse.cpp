

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussErrorResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussErrorResponse::OpenGaussErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

OpenGaussErrorResponse::~OpenGaussErrorResponse() = default;

void OpenGaussErrorResponse::validate()
{
}

web::json::value OpenGaussErrorResponse::toJson() const
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

bool OpenGaussErrorResponse::fromJson(const web::json::value& val)
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

std::string OpenGaussErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void OpenGaussErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool OpenGaussErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void OpenGaussErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string OpenGaussErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void OpenGaussErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool OpenGaussErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void OpenGaussErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


