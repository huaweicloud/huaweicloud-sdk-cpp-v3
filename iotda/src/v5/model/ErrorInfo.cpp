

#include "huaweicloud/iotda/v5/model/ErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ErrorInfo::ErrorInfo()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorInfo::~ErrorInfo() = default;

void ErrorInfo::validate()
{
}

web::json::value ErrorInfo::toJson() const
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
bool ErrorInfo::fromJson(const web::json::value& val)
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


std::string ErrorInfo::getErrorCode() const
{
    return errorCode_;
}

void ErrorInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorInfo::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


