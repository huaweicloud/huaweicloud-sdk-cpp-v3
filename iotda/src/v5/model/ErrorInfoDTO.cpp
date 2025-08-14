

#include "huaweicloud/iotda/v5/model/ErrorInfoDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ErrorInfoDTO::ErrorInfoDTO()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorInfoDTO::~ErrorInfoDTO() = default;

void ErrorInfoDTO::validate()
{
}

web::json::value ErrorInfoDTO::toJson() const
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
bool ErrorInfoDTO::fromJson(const web::json::value& val)
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


std::string ErrorInfoDTO::getErrorCode() const
{
    return errorCode_;
}

void ErrorInfoDTO::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorInfoDTO::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorInfoDTO::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ErrorInfoDTO::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorInfoDTO::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorInfoDTO::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorInfoDTO::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


