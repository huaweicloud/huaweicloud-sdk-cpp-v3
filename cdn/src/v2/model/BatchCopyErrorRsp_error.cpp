

#include "huaweicloud/cdn/v2/model/BatchCopyErrorRsp_error.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyErrorRsp_error::BatchCopyErrorRsp_error()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

BatchCopyErrorRsp_error::~BatchCopyErrorRsp_error() = default;

void BatchCopyErrorRsp_error::validate()
{
}

web::json::value BatchCopyErrorRsp_error::toJson() const
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
bool BatchCopyErrorRsp_error::fromJson(const web::json::value& val)
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


std::string BatchCopyErrorRsp_error::getErrorCode() const
{
    return errorCode_;
}

void BatchCopyErrorRsp_error::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool BatchCopyErrorRsp_error::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void BatchCopyErrorRsp_error::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string BatchCopyErrorRsp_error::getErrorMsg() const
{
    return errorMsg_;
}

void BatchCopyErrorRsp_error::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool BatchCopyErrorRsp_error::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void BatchCopyErrorRsp_error::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


