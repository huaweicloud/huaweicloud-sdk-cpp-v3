

#include "huaweicloud/drs/v3/model/UpdateParamsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




UpdateParamsResponse::UpdateParamsResponse()
{
    success_ = false;
    successIsSet_ = false;
    shouldRestart_ = "";
    shouldRestartIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UpdateParamsResponse::~UpdateParamsResponse() = default;

void UpdateParamsResponse::validate()
{
}

web::json::value UpdateParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(shouldRestartIsSet_) {
        val[utility::conversions::to_string_t("should_restart")] = ModelBase::toJson(shouldRestart_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool UpdateParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("should_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("should_restart"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShouldRestart(refVal);
        }
    }
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

bool UpdateParamsResponse::isSuccess() const
{
    return success_;
}

void UpdateParamsResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool UpdateParamsResponse::successIsSet() const
{
    return successIsSet_;
}

void UpdateParamsResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string UpdateParamsResponse::getShouldRestart() const
{
    return shouldRestart_;
}

void UpdateParamsResponse::setShouldRestart(const std::string& value)
{
    shouldRestart_ = value;
    shouldRestartIsSet_ = true;
}

bool UpdateParamsResponse::shouldRestartIsSet() const
{
    return shouldRestartIsSet_;
}

void UpdateParamsResponse::unsetshouldRestart()
{
    shouldRestartIsSet_ = false;
}

std::string UpdateParamsResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateParamsResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateParamsResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateParamsResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateParamsResponse::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateParamsResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateParamsResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateParamsResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


