

#include "huaweicloud/antiddos/v1/model/UpdateAlertConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateAlertConfigResponse::UpdateAlertConfigResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UpdateAlertConfigResponse::~UpdateAlertConfigResponse() = default;

void UpdateAlertConfigResponse::validate()
{
}

web::json::value UpdateAlertConfigResponse::toJson() const
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
bool UpdateAlertConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateAlertConfigResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateAlertConfigResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateAlertConfigResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateAlertConfigResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateAlertConfigResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateAlertConfigResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateAlertConfigResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateAlertConfigResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


