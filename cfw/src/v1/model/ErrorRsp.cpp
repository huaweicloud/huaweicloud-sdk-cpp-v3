

#include "huaweicloud/cfw/v1/model/ErrorRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ErrorRsp::ErrorRsp()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorRsp::~ErrorRsp() = default;

void ErrorRsp::validate()
{
}

web::json::value ErrorRsp::toJson() const
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
bool ErrorRsp::fromJson(const web::json::value& val)
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


std::string ErrorRsp::getErrorCode() const
{
    return errorCode_;
}

void ErrorRsp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorRsp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorRsp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorRsp::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorRsp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorRsp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorRsp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


